/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/SyncServices.framework/Versions/A/SyncServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface ISDDataDirectoryVersion : NSObject {

	int _version;

}
-(id)initFromPath:(id)arg1 ;
-(char)isTiger;
-(char)isLeopard;
-(id)arrayAsGlobalIds:(id)arg1 ;
-(char)usesISDGlobalId;
-(id)asGlobalId:(id)arg1 ;
-(id)initWithDataVersion:(int)arg1 ;
-(char)isSnowLeopard;
-(int)dataDirectoryType;
@end

