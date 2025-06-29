import sounddevice as sd
import numpy as np
import collections

# CONFIGURATION
delay_ms = 50  # desired delay in milliseconds
sample_rate = 48000  # use 48kHz for better granularity
channels = 1

# Convert delay to frames
delay_frames = int(sample_rate * delay_ms / 1000)

# Ring buffer for delay
buffer = collections.deque(maxlen=delay_frames)

def callback(indata, outdata, frames, time, status):
    if status:
        print(status)

    for sample in indata:
        buffer.append(sample[0])  # mono channel

    for i in range(frames):
        if len(buffer) == delay_frames:
            outdata[i] = buffer.popleft()
        else:
            outdata[i] = 0.0

with sd.Stream(callback=callback,
               samplerate=sample_rate,
               blocksize=64,  # smaller block size for lower latency
               dtype='float32',
               channels=1):
    print("🎤 Speak now with ~{}ms delay. Ctrl+C to stop.".format(delay_ms))
    while True:
        pass
