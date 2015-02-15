/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:09 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/Finder
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Finder/Finder-Structs.h>
#import <Finder/TPropertyPopupButtonController.h>
#import <Finder/TAsyncChooseAppBinderProtocol.h>
#import <Finder/TOpenWithPopupMenuItemProtocol.h>

@class NSString;

@interface TOpenWithPopupController : TPropertyPopupButtonController <TAsyncChooseAppBinderProtocol, TOpenWithPopupMenuItemProtocol> {

	TNSRef<TOpenWithPopupMenuController *> _openWithPopupMenuController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)populate:(const TFENodeVector*)arg1 ;
-(void)setOpenWithPopupMenuController:(id)arg1 ;
-(void)openWithBindingChanged:(id)arg1 ;
-(void)invoke:(const TFENodeVector*)arg1 chosenApp:(const TFENode*)arg2 alwaysOpen:(BOOL)arg3 ;
-(void)cmdOpenWithAppStore:(id)arg1 ;
-(void)cmdOpenWithOther:(id)arg1 ;
-(void)initCommon;
-(void)dealloc;
@end
