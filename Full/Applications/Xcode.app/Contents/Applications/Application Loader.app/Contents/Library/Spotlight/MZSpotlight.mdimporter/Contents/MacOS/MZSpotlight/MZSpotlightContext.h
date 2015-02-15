/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:15:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Xcode.app/Contents/Applications/Application Loader.app/Contents/Library/Spotlight/MZSpotlight.mdimporter/Contents/MacOS/MZSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, ITunesPackage;

@interface MZSpotlightContext : NSObject {

	NSMutableDictionary* _attributes;
	ITunesPackage* _package;

}

@property (nonatomic,retain) NSMutableDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,retain) ITunesPackage * package;                       //@synthesize package=_package - In the implementation block
-(id)initWithPackage:(id)arg1 attributes:(id)arg2 ;
-(id)packageElement;
-(ITunesPackage *)package;
-(void)setPackage:(ITunesPackage *)arg1 ;
-(void)dealloc;
-(NSMutableDictionary *)attributes;
-(void)setAttributes:(NSMutableDictionary *)arg1 ;
@end
