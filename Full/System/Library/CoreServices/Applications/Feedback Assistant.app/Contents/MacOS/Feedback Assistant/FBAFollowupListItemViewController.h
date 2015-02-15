/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/Applications/Feedback Assistant.app/Contents/MacOS/Feedback Assistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>

@protocol FBAFollowupDelegate;
@class FBAFeedbackFollowup, NSArray, FBAFollowupRequestViewController, FBAFollowupResponseViewController, FBACorrespondenceViewController, NSView;

@interface FBAFollowupListItemViewController : NSViewController {

	FBAFeedbackFollowup* _followup;
	id<FBAFollowupDelegate> _followupDelegate;
	NSArray* _fileResponseControllers;
	FBAFollowupRequestViewController* _followupRequestController;
	FBAFollowupResponseViewController* _followupResponseController;
	FBACorrespondenceViewController* _requestCorrespondence;
	FBACorrespondenceViewController* _responseCorrespondence;
	NSView* _requestSection;
	NSView* _responseSection;

}

@property (readonly) FBAFeedbackFollowup * followup;                                            //@synthesize followup=_followup - In the implementation block
@property (assign,nonatomic,__weak) id<FBAFollowupDelegate> followupDelegate;                   //@synthesize followupDelegate=_followupDelegate - In the implementation block
@property (retain) NSArray * fileResponseControllers;                                           //@synthesize fileResponseControllers=_fileResponseControllers - In the implementation block
@property (retain) FBAFollowupRequestViewController * followupRequestController;                //@synthesize followupRequestController=_followupRequestController - In the implementation block
@property (retain) FBAFollowupResponseViewController * followupResponseController;              //@synthesize followupResponseController=_followupResponseController - In the implementation block
@property (retain) FBACorrespondenceViewController * requestCorrespondence;                     //@synthesize requestCorrespondence=_requestCorrespondence - In the implementation block
@property (retain) FBACorrespondenceViewController * responseCorrespondence;                    //@synthesize responseCorrespondence=_responseCorrespondence - In the implementation block
@property (nonatomic,retain) NSView * requestSection;                                           //@synthesize requestSection=_requestSection - In the implementation block
@property (nonatomic,retain) NSView * responseSection;                                          //@synthesize responseSection=_responseSection - In the implementation block
-(void)clearPendingContent;
-(char)hasPendingContent;
-(FBAFeedbackFollowup *)followup;
-(id)initWithFollowup:(id)arg1 ;
-(id<FBAFollowupDelegate>)followupDelegate;
-(void)configureViews;
-(char)shouldDisplayRequestSection;
-(FBACorrespondenceViewController *)requestCorrespondence;
-(FBACorrespondenceViewController *)responseCorrespondence;
-(NSView *)requestSection;
-(NSView *)responseSection;
-(FBAFollowupRequestViewController *)followupRequestController;
-(FBAFollowupResponseViewController *)followupResponseController;
-(void)numberSectionsStartingAt:(unsigned long long)arg1 ;
-(void)setFollowupDelegate:(id<FBAFollowupDelegate>)arg1 ;
-(NSArray *)fileResponseControllers;
-(void)setFileResponseControllers:(NSArray *)arg1 ;
-(void)setFollowupRequestController:(FBAFollowupRequestViewController *)arg1 ;
-(void)setFollowupResponseController:(FBAFollowupResponseViewController *)arg1 ;
-(void)setRequestCorrespondence:(FBACorrespondenceViewController *)arg1 ;
-(void)setResponseCorrespondence:(FBACorrespondenceViewController *)arg1 ;
-(void)setRequestSection:(NSView *)arg1 ;
-(void)setResponseSection:(NSView *)arg1 ;
-(unsigned long long)numberOfSections;
-(void)dealloc;
-(id)description;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)loadView;
@end

