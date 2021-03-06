/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:18 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/DataDetectors.framework/Versions/A/DataDetectors
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol DDHighlightsDataSource <NSObject>
@optional
-(unsigned long long)highlightsView:(id)arg1 highlightStyleForObject:(id)arg2;
-(id)highlightsView:(id)arg1 relatedObjectsForObject:(id)arg2;
-(id)highlightsView:(id)arg1 tooltipForObject:(id)arg2;
-(char)highlightsView:(id)arg1 blankAfterObject:(id)arg2;

@required
-(id)highlightsViewHighlightObjects:(id)arg1;
-(id)highlightsView:(id)arg1 framesOfHighlightObject:(id)arg2;

@end

