/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:26 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/BKStore.bundle/Contents/MacOS/BKStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol IMPlugIn <NSObject>
@property (assign,nonatomic) int state; 
@optional
-(id)plugInDescriptor;
-(void)pluginDidOpen;
-(void)pluginWillClose;

@required
-(id)initWithPlugInInstanceDescriptor:(id)arg1;
-(void)setState:(int)arg1;
-(int)state;

@end

