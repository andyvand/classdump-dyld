/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:50:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/Applications/Feedback Assistant.app/Contents/MacOS/Feedback Assistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>

@class FBAFeedbackSummaryQuestionGroupViewController, NSSet, FBAFiler, NSMutableArray, FBAStackView;

@interface FBASummaryAttachmentsViewController : NSViewController {

	char _shouldShowQuestionLinks;
	FBAFeedbackSummaryQuestionGroupViewController* _parentGroup;
	NSSet* _filenames;
	NSSet* _requirements;
	FBAFiler* _filer;
	NSMutableArray* _summaryAttachments;
	FBAStackView* _attachmentStack;

}

@property (__weak) FBAFeedbackSummaryQuestionGroupViewController * parentGroup;              //@synthesize parentGroup=_parentGroup - In the implementation block
@property (assign,nonatomic) char shouldShowQuestionLinks;                                   //@synthesize shouldShowQuestionLinks=_shouldShowQuestionLinks - In the implementation block
@property (retain) NSSet * filenames;                                                        //@synthesize filenames=_filenames - In the implementation block
@property (retain) NSSet * requirements;                                                     //@synthesize requirements=_requirements - In the implementation block
@property (retain) FBAFiler * filer;                                                         //@synthesize filer=_filer - In the implementation block
@property (retain) NSMutableArray * summaryAttachments;                                      //@synthesize summaryAttachments=_summaryAttachments - In the implementation block
@property (retain) FBAStackView * attachmentStack;                                           //@synthesize attachmentStack=_attachmentStack - In the implementation block
-(void)goToFile:(id)arg1 withRequirement:(id)arg2 ;
-(void)revealFile:(id)arg1 ;
-(void)setRequirements:(NSSet *)arg1 ;
-(FBAFiler *)filer;
-(void)setFiler:(FBAFiler *)arg1 ;
-(id)initWithFilenames:(id)arg1 requirements:(id)arg2 filer:(id)arg3 ;
-(void)setShouldShowQuestionLinks:(char)arg1 ;
-(char)shouldShowQuestionLinks;
-(id)satisfierForRequirement:(id)arg1 fromFilenames:(id)arg2 ;
-(NSMutableArray *)summaryAttachments;
-(FBAStackView *)attachmentStack;
-(void)setFilenames:(NSSet *)arg1 ;
-(void)setSummaryAttachments:(NSMutableArray *)arg1 ;
-(void)setAttachmentStack:(FBAStackView *)arg1 ;
-(FBAFeedbackSummaryQuestionGroupViewController *)parentGroup;
-(void)setParentGroup:(FBAFeedbackSummaryQuestionGroupViewController *)arg1 ;
-(void)loadView;
-(NSSet *)filenames;
-(NSSet *)requirements;
@end
