/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:03 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/DataDetectors.framework/Versions/A/DataDetectors
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataDetectors/DataDetectors-Structs.h>
#import <DataDetectors/DDOperationDelegate.h>
#import <DataDetectors/DDHighlightsDataSource.h>

@protocol DDDetectorManagerDelegate;
@class NSMutableDictionary, DDThreadManager, NSMutableArray, NSString;

@interface DDDetectorManager : NSObject <DDOperationDelegate, DDHighlightsDataSource> {

	CFDictionaryRef _highlightsIdentifierForView;
	NSMutableDictionary* _highlightsRequestsForIdentifier;
	CFDictionaryRef _identifierForWebView;
	NSMutableDictionary* _scanRequestsForIdentifier;
	id<DDDetectorManagerDelegate> _delegate;
	DDThreadManager* _threadManager;
	NSMutableArray* _scanOperations;
	char _highlightEverything;
	char _onlyURLify;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(void)readDefaults:(id)arg1 ;
-(id)initWithThreadManager:(id)arg1 ;
-(void)webViewWithIdentifierWillGoAway:(id)arg1 ;
-(void)_removeReferenceToHLViewForIdentifier:(id)arg1 ;
-(id)_highligtsViewForWebView:(id)arg1 highlightRequest:(id)arg2 ;
-(void)setPasteboardString:(id)arg1 ;
-(id)_highlightsViewForIdentifier:(id)arg1 ;
-(void)viewWillGoAway:(id)arg1 ;
-(void)scanCompleted:(id)arg1 ;
-(id)highlightsViewHighlightObjects:(id)arg1 ;
-(id)highlightsView:(id)arg1 framesOfHighlightObject:(id)arg2 ;
-(unsigned long long)highlightsView:(id)arg1 highlightStyleForObject:(id)arg2 ;
-(id)highlightsView:(id)arg1 tooltipForObject:(id)arg2 ;
-(char)highlightsView:(id)arg1 blankAfterObject:(id)arg2 ;
-(void)setDOMModificationMode:(int)arg1 ;
-(void)cancelDetectionForIdentifier:(id)arg1 ;
-(void)webViewWithIdentifierDidAppear:(id)arg1 ;
-(void)webViewWithIdentifierWillDisappear:(id)arg1 ;
-(void)clearResultsForView:(id)arg1 ;
-(id)detectWebViewContent:(id)arg1 context:(id)arg2 ;
-(id)highlightsView:(id)arg1 menuForEvent:(id)arg2 onHighlightObject:(id)arg3 ;
-(int)highlightsView:(id)arg1 actionForEvent:(id)arg2 onHighlightObject:(id)arg3 proposedAction:(int)arg4 ;
-(void)layoutChangedForView:(id)arg1 ;
-(void)setHighlightsEverything:(char)arg1 ;
-(void)setOnlyURLify:(char)arg1 ;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
@end

