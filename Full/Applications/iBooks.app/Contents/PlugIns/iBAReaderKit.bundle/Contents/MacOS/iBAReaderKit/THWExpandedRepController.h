/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 5:25:08 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/iBAReaderKit.bundle/Contents/MacOS/iBAReaderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol THWExpandedRepController <NSObject>
@optional
-(void)expandableRepContainsHTMLContent:(id)arg1;

@required
-(id)expandedRepSourceRep;
-(int)expandedRepControllerState;
-(void)expandedRepControllerInvalidateChildrenInPanel:(int)arg1;
-(void)expandedRepControllerAnimatePanel:(int)arg1 withCrossFadeContent:(char)arg2 backgroundLayout:(char)arg3 duration:(double)arg4;
-(void)expandedRepControllerUpdatePanelVisibility;

@end
