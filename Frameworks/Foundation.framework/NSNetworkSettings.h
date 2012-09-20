/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSNetworkSettingsInternal;

@interface NSNetworkSettings : NSObject  {
    NSNetworkSettingsInternal *_internal;
}

+ (id)sharedNetworkSettings;

- (void)dealloc;
- (id)init;
- (id)_init;
- (void)setProxyDictionary:(id)arg1;
- (BOOL)connectedToInternet:(BOOL)arg1;
- (void)setProxyPropertiesForURL:(id)arg1 onStream:(struct __CFReadStream { }*)arg2;
- (BOOL)isProxyNeededForURL:(id)arg1;
- (id)proxyPropertiesForURL:(id)arg1;
- (void)_listenForProxySettingChanges;
- (void)_updateProxySettings;
- (id)proxyDictionary;

@end