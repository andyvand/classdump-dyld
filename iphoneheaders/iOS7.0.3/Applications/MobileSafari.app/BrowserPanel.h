/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:35:38 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol BrowserPanel <NSObject>
@optional
-(void)panelWillSuspend;
-(BOOL)shouldResumePanel;
-(BOOL)shouldShowToolbarInFullscreen;
-(id)toolbarItems;

@required
-(int)panelType;
-(int)pausesPages;
-(BOOL)ignoresPrivateBrowsingStyle;
@end
