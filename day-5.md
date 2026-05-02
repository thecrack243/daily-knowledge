# Day 05

Today I implemented a small BERT model on the SQuAD dataset.

## What I did
- Worked with a transformer-based model (BERT)
- Applied it to a question-answering task using the SQuAD dataset
- Ran training / inference on a simplified or small setup

## What I learned
- BERT understands context by looking at the entire sentence (bidirectional)
- In SQuAD, the model predicts the start and end positions of the answer in a passage
- Tokenization (like WordPiece) is an important step before feeding data into the model

## Key Insight
Unlike traditional models, BERT does not just process text sequentially — it captures deeper relationships between words using attention mechanisms.

## Challenges
- Understanding input format (question + context)
- Handling tokenization and alignment of answers
- Managing compute (BERT can be heavy)

## Reflection
This was my first step into transformer-based NLP models. It’s more complex than classical ML, but also much more powerful.

## Next step
- Improve understanding of attention mechanism
- Explore fine-tuning vs training from scratch
- Try improving accuracy or experimenting with different datasets
