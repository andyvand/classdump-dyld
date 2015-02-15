/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:11 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/Finder
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Finder/NSPasteboardWriting.h>

@class TBrowserContainerController, TTabViewController, NSString;

@interface TTabViewPBWriter : NSObject <NSPasteboardWriting> {

	TBrowserContainerController* _target;
	TTabViewController* _tabViewTarget;

}

@property (assign,nonatomic) TBrowserContainerController * target;              //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) TTabViewController * tabViewTarget;                //@synthesize tabViewTarget=_tabViewTarget - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithTarget:(id)arg1 forTabView:(id)arg2 ;
-(void)setTabViewTarget:(TTabViewController *)arg1 ;
-(TTabViewController *)tabViewTarget;
-(void)setTarget:(TBrowserContainerController *)arg1 ;
-(TBrowserContainerController *)target;
-(id)writableTypesForPasteboard:(id)arg1 ;
-(id)pasteboardPropertyListForType:(id)arg1 ;
@end
