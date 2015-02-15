/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:47:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Preview.app/Contents/MacOS/Preview
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Preview/Preview-Structs.h>
@class NSString;

@interface Profile : NSObject {

	ColorSyncProfileRef mRef;
	CGColorSpaceRef mColorspace;
	CFURLRef mURL;
	unsigned mClass;
	unsigned mSpace;
	NSString* mName;
	NSString* mPath;

}
+(id)arrayOfProofableProfiles;
+(id)arrayOfAllProfilesWithSpace:(id)arg1 ;
+(id)arrayOfAllProfiles;
+(id)profileWithPath:(id)arg1 ;
+(id)profileWithLinearRGB;
+(id)profileDefaultRGB;
+(id)profileDefaultGray;
+(id)profileDefaultCMYK;
+(id)profileWithGenericRGB;
+(id)profileWithIterateData:(CFDictionaryRef)arg1 ;
-(unsigned)classType;
-(unsigned)spaceType;
-(id)initWithGenericRGB;
-(id)initWithLinearRGB;
-(id)initWithIterateData:(CFDictionaryRef)arg1 ;
-(id)dataForCISoftproofTextureWithGridSize:(unsigned long long)arg1 renderingIntent:(int)arg2 ;
-(CGColorSpaceRef)colorspace;
-(ColorSyncProfileRef)ref;
-(void)dealloc;
-(id)description;
-(id)path;
-(char)isEqual:(id)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(CFURLRef)location;
@end
