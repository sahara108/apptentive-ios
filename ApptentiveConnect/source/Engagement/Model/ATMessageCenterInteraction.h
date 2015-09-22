//
//  ATMessageCenterInteraction.h
//  ApptentiveConnect
//
//  Created by Peter Kamb on 5/22/15.
//  Copyright (c) 2015 Apptentive, Inc. All rights reserved.
//

#import "ATInteraction.h"

@interface ATMessageCenterInteraction : ATInteraction

+ (id)interactionForInvokingMessageEvents;

+ (id)messageCenterInteractionFromInteraction:(ATInteraction *)interaction;

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *branding;

@property (nonatomic, readonly) NSString *composerTitle;
@property (nonatomic, readonly) NSString *composerPlaceholderText;
@property (nonatomic, readonly) NSString *composerSendButtonTitle;
@property (nonatomic, readonly) NSString *composerCloseConfirmBody;
@property (nonatomic, readonly) NSString *composerCloseDiscardButtonTitle;
@property (nonatomic, readonly) NSString *composerCloseCancelButtonTitle;

@property (nonatomic, readonly) NSString *greetingTitle;
@property (nonatomic, readonly) NSString *greetingBody;
@property (nonatomic, readonly) NSURL *greetingImageURL;

@property (nonatomic, readonly) NSString *statusBody;

@property (nonatomic, readonly) NSString *contextMessageBody;

@property (nonatomic, readonly) NSString *HTTPErrorBody;
@property (nonatomic, readonly) NSString *networkErrorBody;

@property (nonatomic, readonly) BOOL profileRequested;
@property (nonatomic, readonly) BOOL profileRequired;

@property (nonatomic, readonly) NSString *profileInitialTitle;
@property (nonatomic, readonly) NSString *profileInitialNamePlaceholder;
@property (nonatomic, readonly) NSString *profileInitialEmailPlaceholder;
@property (nonatomic, readonly) NSString *profileInitialSkipButtonTitle;
@property (nonatomic, readonly) NSString *profileInitialSaveButtonTitle;
@property (nonatomic, readonly) NSString *profileInitialEmailExplanation;

@property (nonatomic, readonly) NSString *profileEditTitle;
@property (nonatomic, readonly) NSString *profileEditNamePlaceholder;
@property (nonatomic, readonly) NSString *profileEditEmailPlaceholder;
@property (nonatomic, readonly) NSString *profileEditSkipButtonTitle;
@property (nonatomic, readonly) NSString *profileEditSaveButtonTitle;

@end
