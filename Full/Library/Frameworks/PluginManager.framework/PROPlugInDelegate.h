/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:08:50 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Library/Frameworks/PluginManager.framework/PluginManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PROPlugInDelegate <PROAPIAccessing>
@required
-(void)plugInCouldNotInitialize:(id)arg1;
-(id)plugInGroupWithUUID:(CFUUIDRef)arg1;
-(void)plugIn:(id)arg1 didError:(id)arg2;
-(char)plugInShouldLoadPlugInInstanceForTheFirstTime:(id)arg1;
-(id)apiManagerForPlugInInstances;

@end

