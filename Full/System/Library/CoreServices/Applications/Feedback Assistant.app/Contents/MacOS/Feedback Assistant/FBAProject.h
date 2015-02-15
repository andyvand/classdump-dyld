/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:50:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/Applications/Feedback Assistant.app/Contents/MacOS/Feedback Assistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Feedback Assistant/FBAManagedFeedbackObject.h>

@class NSString, NSSet, NSURL;

@interface FBAProject : FBAManagedFeedbackObject

@property (retain) NSString * name; 
@property (retain) NSString * status; 
@property (assign) char is_public; 
@property (retain) NSString * buildPrefix; 
@property (retain) NSSet * bugForms; 
@property (retain) NSURL * thumbnailURL; 
@property (retain) NSSet * formResponses; 
@property (retain) NSSet * formResponsesRequiringAction; 
@property (retain) NSSet * announcements; 
@property (retain) NSSet * issueDefinitions; 
@property (retain) NSSet * issueTypes; 
@property (retain) NSSet * issueAreas; 
@property (retain) NSSet * filePredicates; 
@property (retain) NSSet * builds; 
@property (retain) NSString * primitiveThumbnailURL; 
-(id)activeBugFormWithType:(long long)arg1 ;
-(char)canStartBugFormWithType:(long long)arg1 ;
-(id)activeBugFormWithType:(long long)arg1 formID:(id)arg2 ;
-(char)canStartBugforms;
-(char)hasBuildsAndIsActive;
-(id)issueAreaWithKeywordString:(id)arg1 ;
-(char)usesBuildPrefix;
-(id)issueTypeWithDisplayName:(id)arg1 ;
-(id)bugFormWithType:(long long)arg1 ;
-(id)maxBuild;
-(id)buildForName:(id)arg1 ;
-(id)fileRequirementsForIssueType:(id)arg1 ;
-(id)fileRequirementsForIssueArea:(id)arg1 ;
-(NSURL *)thumbnailURL;
-(void)setThumbnailURL:(NSURL *)arg1 ;
-(id)description;
-(char)isActive;
@end
