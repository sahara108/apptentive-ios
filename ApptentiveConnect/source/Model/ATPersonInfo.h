//
//  ATPersonInfo.h
//  ApptentiveConnect
//
//  Created by Andrew Wooster on 10/2/12.
//  Copyright (c) 2012 Apptentive, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString *const ATCurrentPersonPreferenceKey;

@interface ATPersonInfo : NSObject <NSCoding>
@property (nonatomic, readonly) NSString *apptentiveID;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *emailAddress;

@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;

+ (ATPersonInfo *)currentPerson;

/** If json is nil will not create a new person and will return nil. */
+ (ATPersonInfo *)newPersonFromJSON:(NSDictionary *)json;

- (NSDictionary *)apiJSON;

@end
