/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/Applications/Feedback Assistant.app/Contents/MacOS/Feedback Assistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Feedback Assistant/FBAManagedFeedbackObject.h>
#import <Feedback Assistant/FBAMailboxContent.h>

@class NSNumber, NSDate, FBAProject, NSString, NSURL, FBAFeedback, NSSet, FBABugForm, NSArray, FBAAnswer;

@interface FBAFormResponse : FBAManagedFeedbackObject <FBAMailboxContent> {

	NSURL* _searchURL;
	char isLoaded;
	char pendingDeletion;

}

@property (getter=isCompleted) char completed; 
@property (assign) char requiresAction; 
@property (retain) NSDate * creationDate; 
@property (retain) NSDate * modificationDate; 
@property (retain) NSString * largeFilePrefix; 
@property (assign) char remote; 
@property (retain) NSString * buildString; 
@property (assign) char isLoaded; 
@property (assign) char pendingDeletion; 
@property (retain) NSString * extractedTitle; 
@property (retain) NSString * extractedProblemDescription; 
@property (retain) NSString * extractedIssueType; 
@property (retain) NSString * extractedIssueArea; 
@property (retain) NSNumber * extractedFollowupCount; 
@property (readonly) NSString * title; 
@property (readonly) NSString * problemDescription; 
@property (readonly) NSString * issueType; 
@property (readonly) NSString * issueArea; 
@property (readonly) NSString * issueAreaDisplay; 
@property (readonly) NSNumber * followupCount; 
@property (retain) NSNumber * feedbackID; 
@property (retain) FBAFeedback * feedback; 
@property (retain) NSSet * answers; 
@property (retain) FBABugForm * bugForm; 
@property (retain) FBAProject * project; 
@property (retain) NSNumber * primitiveRequiresAction; 
@property (retain) NSNumber * primitiveCompleted; 
@property (retain) NSArray * titleAnswers; 
@property (readonly) FBAAnswer * titleAnswer; 
@property (retain) NSArray * problemDescriptionAnswers; 
@property (readonly) FBAAnswer * problemDescriptionAnswer; 
@property (retain) NSArray * issueTypeAnswers; 
@property (readonly) FBAAnswer * issueTypeAnswer; 
@property (retain) NSArray * issueAreaAnswers; 
@property (readonly) FBAAnswer * issueAreaAnswer; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSNumber * ID; 
@property (readonly) NSDate * mailboxSortDate; 
@property (readonly) NSString * mailboxKind; 
@property (readonly) char shouldAppearInInbox; 
@property (readonly) char shouldAppearInDrafts; 
@property (readonly) char shouldAppearInSent; 
@property (readonly) NSString * searchText; 
@property (readonly) char unread; 
@property (readonly) NSURL * searchURL; 
+(id)emptyResponseWithBugForm:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)keyPathsForValuesAffectingTitleAnswer;
+(id)keyPathsForValuesAffectingProblemDescriptionAnswer;
+(id)keyPathsForValuesAffectingProblemDescription;
+(id)keyPathsForValuesAffectingIssueTypeAnswer;
+(id)keyPathsForValuesAffectingIssueType;
+(id)keyPathsForValuesAffectingIssueAreaAnswer;
+(id)keyPathsForValuesAffectingIssueArea;
+(id)keyPathsForValuesAffectingFollowupCount;
+(id)keyPathsForValuesAffectingIssueAreaDisplay;
+(id)keyPathsForValuesAffectingMailboxSortDate;
+(id)keyPathsForValuesAffectingShouldAppearInInbox;
+(id)keyPathsForValuesAffectingShouldAppearInDrafts;
+(id)keyPathsForValuesAffectingShouldAppearInSent;
+(id)keyPathsForValuesAffectingSearchText;
+(id)keyPathsForValuesAffectingUnread;
+(id)keyPathsForValuesAffectingTitle;
-(id)answerForQuestionID:(id)arg1 ;
-(id)valuesForQuestionID:(id)arg1 ;
-(void)setValue:(id)arg1 forQuestionID:(id)arg2 ;
-(id)valueForQuestionID:(id)arg1 ;
-(char)pendingDeletion;
-(id)fileRequirements;
-(id)exportFeedbackID;
-(id)exportTimestamp;
-(id)exportTitle;
-(char)isAnswerExpectedForQuestion:(id)arg1 ;
-(char)exportShouldShowFollowup:(id)arg1 ;
-(id)attributedStringForExport;
-(NSString *)mailboxKind;
-(void)setPendingDeletion:(char)arg1 ;
-(id)answerWithID:(id)arg1 ;
-(id)valueForAnswerID:(id)arg1 ;
-(id)valuesForAnswerID:(id)arg1 ;
-(void)setValue:(id)arg1 forAnswerID:(id)arg2 ;
-(FBAAnswer *)titleAnswer;
-(FBAAnswer *)problemDescriptionAnswer;
-(FBAAnswer *)issueTypeAnswer;
-(FBAAnswer *)issueAreaAnswer;
-(void)setRequiresAction:(char)arg1 ;
-(char)requiresAction;
-(NSString *)issueArea;
-(NSString *)problemDescription;
-(NSString *)issueType;
-(NSString *)issueAreaDisplay;
-(char)shouldAppearInInbox;
-(NSDate *)mailboxSortDate;
-(char)shouldAppearInDrafts;
-(char)shouldAppearInSent;
-(NSString *)searchText;
-(void)updateExtractedValuesFromAnswers;
-(NSNumber *)followupCount;
-(void)updateRequiresActionFromFollowups;
-(char)allowUnsolicitedFollowup;
-(char)evaluateConditional:(id)arg1 ;
-(id)findAnswerForRole:(id)arg1 ;
-(char)mandatorySysdiagnose;
-(NSURL *)searchURL;
-(char)unread;
-(void)setIsLoaded:(char)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSString *)title;
-(char)isLoaded;
-(id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2 ;
-(char)isCompleted;
-(void)setCompleted:(char)arg1 ;
@end

