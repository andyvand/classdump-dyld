/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:08:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Library/Application Support/iLifeMediaBrowser/Plug-Ins/iLMBiPhoto9Plugin.ilmbplugin/Contents/MacOS/iLMBiPhoto9Plugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, IP9_RKSelect;

@interface IP9_RKBindingVariable : NSObject {

	NSString* _variableName;
	IP9_RKSelect* _variableQuery;

}

@property (nonatomic,retain) IP9_RKSelect * variableQuery;              //@synthesize variableQuery=_variableQuery - In the implementation block
-(id)initWithName:(id)arg1 forQuery:(id)arg2 ;
-(id)variableName;
-(void)setVariableQuery:(IP9_RKSelect *)arg1 ;
-(IP9_RKSelect *)variableQuery;
-(void)dealloc;
-(id)description;
@end
