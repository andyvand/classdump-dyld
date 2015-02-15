/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:56 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/OSAKit.framework/Versions/A/OSAKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSView, NSString;

@interface OSADictionaryHistoryItem : NSObject {

	NSArray* _selectedObjects;
	NSView* _selectedView;
	NSString* _selectedPath;

}
-(void)setSelectedView:(id)arg1 ;
-(void)setSelectedPath:(id)arg1 ;
-(id)initWithSelectedObjects:(id)arg1 inView:(id)arg2 ;
-(id)selectedView;
-(id)selectedPath;
-(void)dealloc;
-(id)selectedObjects;
-(void)setSelectedObjects:(id)arg1 ;
@end

