/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class NSMutableDictionary, NSMutableArray;

@interface MutableMessageHeaders : MessageHeaders  {
    NSMutableDictionary *_headersAdded;
    NSMutableArray *_headersRemoved;
}


- (id)mutableCopy;
- (id)description;
- (void)dealloc;
- (void)mergeHeaders:(id)arg1;
- (void)_appendAddedHeaderKey:(id)arg1 value:(id)arg2 toData:(id)arg3;
- (void)_appendHeaderKey:(id)arg1 value:(id)arg2 toData:(id)arg3;
- (BOOL)hasHeaderForKey:(id)arg1;
- (id)_headerValueForKey:(id)arg1;
- (id)_copyHeaderValueForKey:(id)arg1;
- (id)_copyHeaderValueForKey:(id)arg1 offset:(unsigned int*)arg2 decoded:(BOOL)arg3;
- (void)setAddressListForBcc:(id)arg1;
- (id)allHeaderKeys;
- (void)setAddressListForCc:(id)arg1;
- (void)setAddressListForTo:(id)arg1;
- (void)setAddressListForSender:(id)arg1;
- (void)removeHeaderForKey:(id)arg1;
- (void)stripInternalHeaders;
- (void)setHeader:(id)arg1 forKey:(id)arg2;
- (id)encodedHeaders;
- (id)firstHeaderForKey:(id)arg1;
- (void)setReferences:(id)arg1;
- (void)setAddressList:(id)arg1 forKey:(id)arg2;

@end