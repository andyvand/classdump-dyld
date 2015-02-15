/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:26 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSCopying.h>
#import <AppKit/NSCoding.h>

@class NSURL, NSArray, NSMutableDictionary;

@interface NSPDFInfo : NSObject <NSCopying, NSCoding> {

	NSURL* _URL;
	NSArray* _tagNames;
	long long _orientation;
	CGSize _paperSize;
	NSMutableDictionary* _attributes;
	char _fileExtensionHidden;

}

@property (copy) NSURL * URL;                                                   //@synthesize URL=_URL - In the implementation block
@property (getter=isFileExtensionHidden) char fileExtensionHidden; 
@property (copy) NSArray * tagNames;                                            //@synthesize tagNames=_tagNames - In the implementation block
@property (assign) long long orientation;                                       //@synthesize orientation=_orientation - In the implementation block
@property (assign) CGSize paperSize;                                            //@synthesize paperSize=_paperSize - In the implementation block
@property (readonly) NSMutableDictionary * attributes;                          //@synthesize attributes=_attributes - In the implementation block
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)URL;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)tagNames;
-(void)setTagNames:(NSArray *)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(long long)orientation;
-(CGSize)paperSize;
-(char)isFileExtensionHidden;
-(void)setFileExtensionHidden:(char)arg1 ;
-(void)setOrientation:(long long)arg1 ;
-(void)setPaperSize:(CGSize)arg1 ;
-(NSMutableDictionary *)attributes;
@end

