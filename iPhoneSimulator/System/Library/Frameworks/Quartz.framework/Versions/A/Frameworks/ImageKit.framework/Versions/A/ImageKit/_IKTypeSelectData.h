/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:36 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSView;

@interface _IKTypeSelectData : NSObject {

	NSString* _currentSearch;
	long long _currentSearchIndex;
	long long _initialSearchIndex;
	long long _totalIndexes;
	NSView* _view;

}
-(long long)initialSearchIndex;
-(long long)currentSearchIndex;
-(void)setCurrentSearchIndex:(long long)arg1 ;
-(id)initWithInitialSearchIndex:(long long)arg1 totalIndexes:(long long)arg2 forView:(id)arg3 ;
-(void)_resetCurrentSearchIndex;
-(void)dealloc;
-(void)cancelScheduledEndOfSearch;
-(void)clearView;
-(void)_typeSelectEndCurrentSearch;
-(id)currentSearch;
-(void)scheduleEndOfSearch;
-(id)nextSearchStringForNewValue:(id)arg1 ;
-(void)setCurrentSearch:(id)arg1 ;
@end

