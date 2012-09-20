/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSURLQueueNode;

@interface NSURLQueue : NSObject  {
    unsigned int count;
    NSURLQueueNode *head;
    NSURLQueueNode *tail;
    id monitor;
    BOOL waitOnTake;
    BOOL _pad1;
    BOOL _pad2;
    BOOL _pad3;
}

+ (id)newNode;

- (void)dealloc;
- (id)init;
- (unsigned int)count;
- (void)clear;
- (void)finalize;
- (BOOL)isEmpty;
- (BOOL)remove:(id)arg1;
- (void)setWaitOnTake:(BOOL)arg1;
- (BOOL)waitOnTake;
- (int)indexOf:(id)arg1;
- (id)peekAt:(unsigned int)arg1;
- (id)peek;
- (id)take;
- (void)put:(id)arg1;

@end