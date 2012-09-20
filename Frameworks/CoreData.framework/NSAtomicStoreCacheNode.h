/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSManagedObjectID, NSMutableDictionary;

@interface NSAtomicStoreCacheNode : NSObject  {
    NSManagedObjectID *_objectID;
    unsigned long __versionNumber;
    NSMutableDictionary *_propertyCache;
    void *_reserved1;
}

+ (BOOL)accessInstanceVariablesDirectly;
+ (void)initialize;

- (void)setValue:(id)arg1 forKey:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)valueForKey:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)setPropertyCache:(id)arg1;
- (id)propertyCache;
- (id)_snapshot_;
- (const id*)knownKeyValuesPointer;
- (id)initWithObjectID:(id)arg1;
- (void)_setVersionNumber:(unsigned int)arg1;
- (unsigned int)_versionNumber;
- (id)objectID;

@end