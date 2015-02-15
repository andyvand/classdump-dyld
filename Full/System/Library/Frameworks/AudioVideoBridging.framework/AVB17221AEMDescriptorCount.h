/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:32:35 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AudioVideoBridging.framework/AudioVideoBridging
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AudioVideoBridging/AudioVideoBridging-Structs.h>
#import <AudioVideoBridging/AVB17221AEMObject.h>
#import <AudioVideoBridging/NSCopying.h>

@interface AVB17221AEMDescriptorCount : AVB17221AEMObject <NSCopying> {

	unsigned short descriptorType;
	unsigned short count;

}

@property (assign) unsigned short descriptorType; 
@property (assign) unsigned short count; 
-(void)setDescriptorType:(unsigned short)arg1 ;
-(id)debugLogStringWithIndentation:(id)arg1 ;
-(unsigned short)count;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned short)descriptorType;
-(void)setCount:(unsigned short)arg1 ;
@end
