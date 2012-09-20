/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@class NSArray, NSMutableDictionary, NSMutableSet;

@interface WebPluginDatabase : NSObject  {
    NSMutableDictionary *plugins;
    NSMutableSet *registeredMIMETypes;
    NSArray *plugInPaths;
    NSMutableSet *pluginInstanceViews;
}

+ (id)sharedDatabase;
+ (void)setAdditionalWebPlugInPaths:(id)arg1;
+ (void)closeSharedDatabase;
+ (id)_defaultPlugInPaths;

- (void)dealloc;
- (id)init;
- (void)close;
- (id)plugins;
- (id)_plugInPaths;
- (void)destroyAllPluginInstanceViews;
- (void)removePluginInstanceViewsFor:(id)arg1;
- (void)removePluginInstanceView:(id)arg1;
- (void)addPluginInstanceView:(id)arg1;
- (BOOL)isMIMETypeRegistered:(id)arg1;
- (id)pluginForExtension:(id)arg1;
- (void)_addPlugin:(id)arg1;
- (id)_scanForNewPlugins;
- (void)_removePlugin:(id)arg1;
- (id)pluginForMIMEType:(id)arg1;
- (void)setPlugInPaths:(id)arg1;
- (void)refresh;

@end