# Project 3

## Face Detection System

### Description

The Face Detection System project was my first practical experience with **Computer Vision** and **Object Detection** using deep learning. The objective was to develop a system capable of detecting human faces in images using the **YOLOv8 (You Only Look Once)** object detection framework.

The project was based on the **WIDER FACE dataset**, a large-scale face detection dataset containing images with different conditions, including variations in scale, lighting, pose, and occlusion. This made the project more challenging and closer to real-world computer vision applications.

This project allowed me to understand how modern object detection models work, from dataset preparation and model inference to performance evaluation and deployment.

### What I Did

During this project, I completed the following tasks:

- Explored the WIDER FACE dataset and understood the challenges of face detection in real-world images.
- Used the YOLOv8 architecture for face detection tasks.
- Prepared and processed image data for model evaluation.
- Tested the model on different images to analyze detection performance.
- Evaluated the model using important object detection metrics, including:
  - Precision
  - Recall
  - mAP@0.5
  - mAP@0.5:0.95
- Analyzed the relationship between precision and recall to understand model behavior.
- Developed a **Streamlit web application** to demonstrate the face detection results interactively.
- Organized the project structure, documentation, and files for publication on GitHub.

### Skills Learned

This project helped me develop practical skills in Computer Vision and Deep Learning, including:

- Object detection using YOLO architectures
- Computer Vision fundamentals
- Image preprocessing
- Model evaluation for detection tasks
- Understanding Precision, Recall, and mAP metrics
- Deep Learning model deployment
- Building interactive AI applications with Streamlit
- Organizing and documenting AI projects on GitHub

### Challenges

The main challenge of this project was understanding the complexity of object detection compared to traditional image classification. Instead of only predicting a class label, the model must identify objects and locate them accurately using bounding boxes.

Another challenge was understanding evaluation metrics specific to object detection, especially **mAP (mean Average Precision)**, and how it reflects the model's ability to detect faces correctly.

Training and experimenting with deep learning models also required significant computational resources. Since training large models from scratch can take many hours, I focused on understanding the complete workflow, evaluating the model performance, and learning how these systems are developed and deployed in real applications.

### Outcome

This project significantly improved my understanding of modern Computer Vision systems. I learned how deep learning models such as YOLO can be applied to real-world detection problems and how their performance can be measured using professional evaluation metrics.

The project also introduced me to AI deployment by creating a Streamlit demonstration, bridging the gap between a trained model and a usable application. It prepared me for more advanced projects involving computer vision, real-time detection, and intelligent systems.
