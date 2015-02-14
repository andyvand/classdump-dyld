/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:37 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MFSnippetCalculatorDelegate;
@class NSMutableSet, MFQuoteParser, NSOperationQueue;

@interface MFSnippetCalculator : NSObject {

	NSMutableSet* _messagesToCalculate;
	char _isCalculating;
	id<MFSnippetCalculatorDelegate> _delegate;
	MFQuoteParser* _quoteParser;
	NSOperationQueue* _calculationQueue;

}

@property (__weak) id<MFSnippetCalculatorDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) MFQuoteParser * quoteParser;                      //@synthesize quoteParser=_quoteParser - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * calculationQueue;              //@synthesize calculationQueue=_calculationQueue - In the implementation block
-(id)_snippetForMessage:(id)arg1 ;
-(void)_queueCalculationIfNecessary;
-(void)_performSnippetCalculation;
-(NSOperationQueue *)calculationQueue;
-(MFQuoteParser *)quoteParser;
-(id)_snippetFromAttachments:(id)arg1 ;
-(void)immediatelyCalculateSnippetForMessage:(id)arg1 ;
-(void)calculateSnippetsForMessages:(id)arg1 ;
-(id)init;
-(void)setDelegate:(id<MFSnippetCalculatorDelegate>)arg1 ;
-(id<MFSnippetCalculatorDelegate>)delegate;
@end

