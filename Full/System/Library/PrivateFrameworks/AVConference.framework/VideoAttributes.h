/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:30 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/NSCopying.h>
#import <AVConference/NSCoding.h>

@interface VideoAttributes : NSObject <NSCopying, NSCoding> {

	CGSize ratio;
	int orientation;
	int camera;
	char cameraSwitching;
	CGRect contentsRect;

}

@property (assign,nonatomic) CGSize ratio; 
@property (assign,nonatomic) int orientation; 
@property (assign,nonatomic) int camera; 
@property (assign,nonatomic) char cameraSwitching; 
@property (assign,nonatomic) CGRect contentsRect; 
+(id)videoAttributesWithVideoAttributes:(id)arg1 ;
-(id)initWithEncodedDictionary:(id)arg1 ;
-(void)decodeFromNSDictionary:(id)arg1 ;
-(id)encodeToNewNSDictionary;
-(CGSize)ratio;
-(void)setRatio:(CGSize)arg1 ;
-(char)cameraSwitching;
-(void)setCameraSwitching:(char)arg1 ;
-(id)initWithCameraStatusBits:(unsigned char)arg1 aspectRatio:(CGSize)arg2 contentsRect:(CGRect)arg3 ;
-(char)isEqualToVideoAttributes:(id)arg1 ;
-(void)setContentsRect:(CGRect)arg1 ;
-(int)camera;
-(void)setCamera:(int)arg1 ;
-(CGRect)contentsRect;
-(id)init;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)orientation;
-(void)setOrientation:(int)arg1 ;
@end
