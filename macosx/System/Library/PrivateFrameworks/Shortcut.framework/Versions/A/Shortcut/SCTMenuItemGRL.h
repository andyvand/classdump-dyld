/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:54 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Shortcut.framework/Versions/A/Shortcut
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Shortcut/Shortcut-Structs.h>
#import <Shortcut/SCTGRL.h>

@class SCTCarbonMenu;

@interface SCTMenuItemGRL : SCTGRL {

	SCTCarbonMenu* mCarbonMenu;
	OpaqueEventHandlerRefRef mMenuHideEventHandler;
	OpaqueEventHandlerRefRef mGetFramesBoundsHandler;

}
-(id)localizedCategory;
-(id)representativeIcon;
-(id)fullTitle;
-(void)resolveResourceAndInvoke:(id)arg1 ;
-(id)resolveFromContainer:(id)arg1 ;
-(CGRect)screenRectForResource;
-(id)titleComponentAtIndex:(unsigned long long)arg1 ;
-(char)isValidTitleString:(id)arg1 forIndex:(unsigned long long)arg2 ;
-(CGRect)itemBoundsInScreenCoordinatesForItem:(OpaqueMenuRefRef)arg1 itemIndex:(unsigned short)arg2 ;
-(id)initWithCarbonMenu:(id)arg1 ;
-(void)showcaseMenuItem:(OpaqueMenuRefRef)arg1 itemIndex:(unsigned short)arg2 ;
-(void)notifyPerform:(id)arg1 ;
-(void)enableMenuFramesBoundsHandler:(OpaqueEventHandlerRef*)arg1 forMenuRef:(OpaqueMenuRefRef)arg2 ;
-(void)disableMenuFrameBoundsHandler:(OpaqueEventHandlerRef*)arg1 ;
-(void)removeMenuGRLEventHandler;
-(void)removeMenuGRLHideEventHandler;
-(void)dealloc;
-(id)title;
-(void)hide:(id)arg1 ;
-(void)perform;
-(void)show;
@end

