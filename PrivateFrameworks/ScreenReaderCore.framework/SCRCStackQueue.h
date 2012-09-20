/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCStackQueue : NSObject  {
    struct _SCRCStackNode { id x1; void *x2; void *x3; } *_firstNode;
    struct _SCRCStackNode { id x1; void *x2; void *x3; } *_lastNode;
    unsigned int _count;
}


- (void)enqueueObject:(id)arg1;
- (id)dequeueObject;
- (id)topObject;
- (void)pushArray:(id)arg1;
- (id)popObjectRetained;
- (id)dequeueObjectRetained;
- (id)description;
- (void)removeAllObjects;
- (void)dealloc;
- (unsigned int)count;
- (id)objectEnumerator;
- (BOOL)isEmpty;
- (void)pushObject:(id)arg1;
- (id)popObject;

@end