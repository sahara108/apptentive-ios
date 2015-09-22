//
//  ATLegacyRecord.h
//  ApptentiveConnect
//
//  Created by Andrew Wooster on 1/10/12.
//  Copyright (c) 2012 Apptentive, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@class ATAPIRequest;

@interface ATLegacyRecord : NSObject <NSCoding>@property (nonatomic, copy) NSString *uuid;
@property (nonatomic, copy) NSString *model;
@property (nonatomic, copy) NSString *os_version;
@property (nonatomic, copy) NSString *carrier;
@property (nonatomic, strong) NSDate *date;

- (NSString *)formattedDate:(NSDate *)aDate;

- (NSDictionary *)apiJSON;
- (NSDictionary *)apiDictionary;
- (ATAPIRequest *)requestForSendingRecord;
/*! Called when we're done using this record. */
- (void)cleanup;
@end
