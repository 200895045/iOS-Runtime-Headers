/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSPersistentStoreCoordinator, NSURL, NSArray, NSDictionary, NSString, NSMigrationManager, NSMappingModel, NSManagedObjectModel;

@interface NSStoreMigrationPolicy : NSObject  {
    NSPersistentStoreCoordinator *_coordinator;
    NSURL *_sourceURL;
    NSString *_sourceConfiguration;
    NSDictionary *_sourceOptions;
    NSManagedObjectModel *_sourceModel;
    NSDictionary *_sourceMetadata;
    NSMappingModel *_mappingModel;
    NSURL *_destinationURL;
    NSString *_destinationType;
    NSString *_destinationConfiguration;
    NSDictionary *_destinationOptions;
    NSMigrationManager *_migrationManager;
    NSArray *_resourceBundles;
    long _workingWithSkewedSource;
    void *_reserved2;
    void *_reserved3;
    void *_reserved4;
}

+ (id)migrationStoreOptionsFromStoreOptions:(id)arg1;
+ (void)setMigrationDebugLevel:(int)arg1;
+ (int)migrationDebugLevel;

- (void)setPersistentStoreCoordinator:(id)arg1;
- (id)persistentStoreCoordinator;
- (void)dealloc;
- (void)setResourceBundles:(id)arg1;
- (id)destinationConfigurationForMigration:(id)arg1 sourceMetadata:(id)arg2 error:(id*)arg3;
- (void)setDestinationConfiguration:(id)arg1;
- (void)setSourceOptions:(id)arg1;
- (void)setSourceConfiguration:(id)arg1;
- (void)setSourceURL:(id)arg1;
- (id)addMigratedStoreToCoordinator:(id)arg1 withType:(id)arg2 configuration:(id)arg3 URL:(id)arg4 options:(id)arg5 error:(id*)arg6;
- (id)destinationConfiguration;
- (void)didPerformMigrationWithManager:(id)arg1;
- (void)handleMigrationError:(id)arg1 inManager:(id)arg2;
- (void)willPerformMigrationWithManager:(id)arg1;
- (id)migrationManager;
- (void)setMigrationManager:(id)arg1;
- (id)destinationOptions;
- (void)setDestinationOptions:(id)arg1;
- (id)destinationOptionsForMigration:(id)arg1 sourceMetadata:(id)arg2 error:(id*)arg3;
- (void)setDestinationType:(id)arg1;
- (id)destinationTypeForMigration:(id)arg1 sourceMetadata:(id)arg2 error:(id*)arg3;
- (void)setDestinationURL:(id)arg1;
- (id)destinationURLForMigration:(id)arg1 sourceURL:(id)arg2 sourceMetadata:(id)arg3 error:(id*)arg4;
- (void)setMappingModel:(id)arg1;
- (id)mappingModelForSourceModel:(id)arg1 destinationModel:(id)arg2 error:(id*)arg3;
- (void)setSourceModel:(id)arg1;
- (id)externalDataReferencesURLForDestination:(id)arg1 forStoreOfType:(id)arg2;
- (id)sourceURL;
- (id)sourceOptions;
- (id)sourceConfiguration;
- (id)migrateStoreAtURL:(id)arg1 withManager:(id)arg2 metadata:(id)arg3 options:(id)arg4 error:(id*)arg5;
- (id)managerForSourceModel:(id)arg1 destinationModel:(id)arg2 error:(id*)arg3;
- (id)sourceModelForStoreAtURL:(id)arg1 metadata:(id)arg2 error:(id*)arg3;
- (BOOL)migrateStoreAtURL:(id)arg1 toURL:(id)arg2 storeType:(id)arg3 options:(id)arg4 withManager:(id)arg5 error:(id*)arg6;
- (id)destinationType;
- (id)destinationURL;
- (void)setSourceMetadata:(id)arg1;
- (id)sourceMetadata;
- (id)resourceBundles;
- (id)_gatherDataAndPerformMigration:(id*)arg1;
- (void)setPersistentStoreCoordinator:(id)arg1 sourceURL:(id)arg2 configuration:(id)arg3 metadata:(id)arg4 options:(id)arg5;
- (id)mappingModel;
- (id)destinationModel;
- (id)sourceModel;
- (id)sourceType;

@end