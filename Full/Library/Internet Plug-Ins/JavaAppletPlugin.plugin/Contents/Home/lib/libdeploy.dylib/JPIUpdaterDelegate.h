/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:08:53 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Library/Internet Plug-Ins/JavaAppletPlugin.plugin/Contents/Home/lib/libdeploy.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SUUpdater;

@interface JPIUpdaterDelegate : NSObject {

	SUUpdater* mUpdater;

}

@property (nonatomic,retain) SUUpdater * mUpdater; 
-(id)pathToRelaunchForUpdater:(id)arg1 ;
-(void)setMUpdater:(SUUpdater *)arg1 ;
-(SUUpdater *)mUpdater;
-(id)initWithUpdater:(id)arg1 ;
-(void)applicationDidFinishLaunching:(id)arg1 ;
-(void)dealloc;
@end
