/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/Applications/Feedback Assistant.app/Contents/MacOS/Feedback Assistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>
#import <Feedback Assistant/FBACorrespondingViewController.h>

@class FBAFeedbackFollowup, NSTextField, NSString, NSDate;

@interface FBAFollowupRequestViewController : NSViewController <FBACorrespondingViewController> {

	FBAFeedbackFollowup* _followup;
	NSTextField* _requirementsField;

}

@property (retain) FBAFeedbackFollowup * followup;                   //@synthesize followup=_followup - In the implementation block
@property (readonly) NSString * displayText; 
@property (readonly) NSString * requirementsText; 
@property (__weak) NSTextField * requirementsField;                  //@synthesize requirementsField=_requirementsField - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * correspondenceTitle; 
@property (readonly) NSDate * correspondenceTime; 
@property (readonly) char correspondenceUnread; 
@property (readonly) NSString * correspondenceSubtitle; 
+(id)keyPathsForValuesAffectingCorrespondenceTitle;
+(id)keyPathsForValuesAffectingCorrespondenceUnread;
+(id)keyPathsForValuesAffectingDisplayText;
+(id)keyPathsForValuesAffectingAttributedDisplayText;
+(id)keyPathsForValuesAffectingRequirementsText;
-(NSString *)correspondenceTitle;
-(FBAFeedbackFollowup *)followup;
-(NSDate *)correspondenceTime;
-(char)correspondenceUnread;
-(id)initWithFollowup:(id)arg1 ;
-(NSString *)requirementsText;
-(NSTextField *)requirementsField;
-(id)attributedDisplayText;
-(void)setFollowup:(FBAFeedbackFollowup *)arg1 ;
-(void)setRequirementsField:(NSTextField *)arg1 ;
-(NSString *)displayText;
-(void)loadView;
@end

