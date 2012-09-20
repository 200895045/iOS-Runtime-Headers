/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MessageLibrary, Message;

@interface _MFDALibraryConsumerFactory : NSObject <MFMessageDataConsumerFactory> {
    MessageLibrary *_library;
    Message *_message;
}

@property(retain) MessageLibrary * library;
@property(retain) Message * message;


- (void)dealloc;
- (void)setLibrary:(id)arg1;
- (id)library;
- (id)message;
- (void)setMessage:(id)arg1;
- (id)dataConsumerForPart:(id)arg1;

@end