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

@interface AVB17221AEMVideoAspectRatio : AVB17221AEMObject <NSCopying> {

	unsigned short aspectRatio;

}

@property (assign) unsigned short aspectRatio; 
@property (assign) unsigned char pixelWidth; 
@property (assign) unsigned char pixelHeight; 
+(id)keyPathsForValuesAffectingPixelWidth;
+(id)keyPathsForValuesAffectingPixelHeight;
-(char)updateWithPlistEntry:(id)arg1 ;
-(char)updateWithXML:(id)arg1 ;
-(id)xmlRepresentation;
-(id)debugLogStringWithIndentation:(id)arg1 ;
-(void)setPixelHeight:(unsigned char)arg1 ;
-(void)setPixelWidth:(unsigned char)arg1 ;
-(unsigned char)pixelWidth;
-(unsigned char)pixelHeight;
-(id)plistRepresentation;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAspectRatio:(unsigned short)arg1 ;
-(unsigned short)aspectRatio;
@end

