/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/BKAssetEpub.bundle/Contents/MacOS/BKAssetEpub
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <BKAssetEpub/BKAssetEpub-Structs.h>
@class BKEpubCFILocation;

@interface BKNoteLayoutItem : NSObject {

	BKEpubCFILocation* _location;
	CGRect _baseRect;
	CGRect _textRect;
	CGRect _resolvedRect;

}

@property (nonatomic,retain) BKEpubCFILocation * location;              //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) CGRect baseRect;                           //@synthesize baseRect=_baseRect - In the implementation block
@property (assign,nonatomic) CGRect textRect;                           //@synthesize textRect=_textRect - In the implementation block
@property (assign,nonatomic) CGRect resolvedRect;                       //@synthesize resolvedRect=_resolvedRect - In the implementation block
-(CGRect)baseRect;
-(CGRect)textRect;
-(CGRect)resolvedRect;
-(void)setBaseRect:(CGRect)arg1 ;
-(void)setTextRect:(CGRect)arg1 ;
-(void)setResolvedRect:(CGRect)arg1 ;
-(id)description;
-(BKEpubCFILocation *)location;
-(void)setLocation:(BKEpubCFILocation *)arg1 ;
@end

