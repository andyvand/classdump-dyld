/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:48 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MailCore.framework/Versions/A/MailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MailCore/MailCore-Structs.h>
@class NSString;

@interface MCFileTypeInfo : NSObject {

	unsigned _osType;
	NSString* _mimeType;
	NSString* _pathExtension;

}

@property (nonatomic,copy) NSString * mimeType;                   //@synthesize mimeType=_mimeType - In the implementation block
@property (nonatomic,copy) NSString * pathExtension;              //@synthesize pathExtension=_pathExtension - In the implementation block
@property (assign,nonatomic) unsigned osType;                     //@synthesize osType=_osType - In the implementation block
-(char)getTypeInfoForDesiredFields:(unsigned long long)arg1 ;
-(unsigned)osType;
-(void)_getTypeInfoBasedOnFields:(unsigned long long*)arg1 inputClass:(CFStringRef)arg2 inputValue:(CFStringRef)arg3 ;
-(void)_getTypeInfoFromFallbackFields:(unsigned long long*)arg1 ;
-(NSString *)mimeType;
-(id)getPedigree;
-(void)setPathExtension:(NSString *)arg1 ;
-(void)setOsType:(unsigned)arg1 ;
-(void)setMimeType:(NSString *)arg1 ;
-(id)description;
-(NSString *)pathExtension;
@end

