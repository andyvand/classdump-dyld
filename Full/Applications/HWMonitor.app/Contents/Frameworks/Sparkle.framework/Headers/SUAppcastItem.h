/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/HWMonitor.app/Contents/Frameworks/Sparkle.framework/Sparkle
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSDate, NSURL, NSDictionary;

@interface SUAppcastItem : NSObject {

	NSString* title;
	NSDate* date;
	NSString* itemDescription;
	NSURL* releaseNotesURL;
	NSString* DSASignature;
	NSString* minimumSystemVersion;
	NSURL* fileURL;
	NSString* versionString;
	NSString* displayVersionString;
	NSDictionary* propertiesDictionary;

}
-(id)propertiesDictionary;
-(void)setDisplayVersionString:(id)arg1 ;
-(void)setDSASignature:(id)arg1 ;
-(id)DSASignature;
-(id)displayVersionString;
-(void)setReleaseNotesURL:(id)arg1 ;
-(id)releaseNotesURL;
-(id)itemDescription;
-(void)setItemDescription:(id)arg1 ;
-(id)minimumSystemVersion;
-(void)setMinimumSystemVersion:(id)arg1 ;
-(void)setVersionString:(id)arg1 ;
-(void)dealloc;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(id)date;
-(void)setDate:(id)arg1 ;
-(void)setFileURL:(id)arg1 ;
-(id)fileURL;
-(id)initWithDictionary:(id)arg1 ;
-(id)versionString;
@end

