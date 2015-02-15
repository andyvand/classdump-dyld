/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:21 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/iLifeMediaBrowser.framework/Versions/A/iLifeMediaBrowser
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iLifeMediaBrowser/iLifeMediaBrowser-Structs.h>
@class PBOXRemoteMediaBrowserPanel;

@interface ILMBRemoteMediaBrowserPanel : NSObject {

	PBOXRemoteMediaBrowserPanel* _browserPanel;

}
+(id)sharedInstance;
-(void)showPanel;
-(void)hidePanel;
-(void)toggle;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(CGRect)frame;
-(void)setAutosaveName:(id)arg1 ;
-(id)autosaveName;
-(void)setBrowserType:(unsigned long long)arg1 ;
-(unsigned long long)browserType;
@end
