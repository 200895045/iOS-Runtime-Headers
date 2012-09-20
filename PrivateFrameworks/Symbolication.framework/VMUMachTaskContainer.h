/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUMachTaskContainer : NSObject  {
    int _pid;
    unsigned int _task;
}

+ (id)machTaskContainerWithPid:(int)arg1 task:(unsigned int)arg2;
+ (id)machTaskContainerWithPid:(int)arg1;
+ (id)machTaskContainerWithTask:(unsigned int)arg1;
+ (id)machTaskContainer;

- (id)description;
- (void)dealloc;
- (void)finalize;
- (id)initWithPid:(int)arg1 task:(unsigned int)arg2;
- (unsigned int)task;
- (int)pid;

@end