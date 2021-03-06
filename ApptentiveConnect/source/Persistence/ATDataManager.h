//
//  ATDataManager.h
//  ApptentiveConnect
//
//  Created by Andrew Wooster on 5/12/13.
//  Copyright (c) 2013 Apptentive, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@interface ATDataManager : NSObject

@property (nonatomic, strong, readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (nonatomic, strong, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, strong, readonly) NSManagedObjectModel *managedObjectModel;
@property (nonatomic, readonly) BOOL didRemovePersistentStore;
@property (nonatomic, readonly) BOOL didFailToMigrateStore;
@property (nonatomic, readonly) BOOL didMigrateStore;

- (id)initWithModelName:(NSString *)modelName inBundle:(NSBundle *)bundle storagePath:(NSString *)path;

- (NSURL *)persistentStoreURL;
- (BOOL)setupAndVerify;

@end
