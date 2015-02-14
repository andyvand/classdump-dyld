/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Font Book.app/Contents/MacOS/Font Book
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Font Book/Font Book-Structs.h>
#import <Font Book/NSCopying.h>
#import <Font Book/NSCoding.h>

@class FBFace, NSString, NSFont;

@interface FBExtendedSampleText : NSObject <NSCopying, NSCoding> {

	FBFace* _face;
	double _size;
	NSString* _text;

}

@property (retain) FBFace * face;                           //@synthesize face=_face - In the implementation block
@property (retain,readonly) NSFont * font; 
@property (assign) double size;                             //@synthesize size=_size - In the implementation block
@property (copy,readonly) NSString * faceName; 
@property (copy) NSString * text;                           //@synthesize text=_text - In the implementation block
+(id)extendedSampleTextWithFace:(id)arg1 size:(double)arg2 text:(id)arg3 ;
-(id)initWithFace:(id)arg1 size:(double)arg2 text:(id)arg3 ;
-(NSString *)faceName;
-(void)setText:(NSString *)arg1 ;
-(FBFace *)face;
-(void)setFace:(FBFace *)arg1 ;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSFont *)font;
-(double)size;
-(void)setSize:(double)arg1 ;
-(NSString *)text;
@end

