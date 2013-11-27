/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:34:40 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/AppStore.app/AppStore
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <AppStore/AppStore-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSString, NSArray, NSURL, NSMutableDictionary;

@interface ASApplePackPage : NSObject <NSCopying> {

	NSString* _downloadAllTitle;
	NSString* _explanationText;
	BOOL _installed;
	NSArray* _items;
	NSURL* _legalURL;
	NSString* _legalURLText;
	NSMutableDictionary* _taglines;

}

@property (nonatomic,copy) NSString * downloadAllTitle;                      //@synthesize downloadAllTitle=_downloadAllTitle - In the implementation block
@property (nonatomic,copy) NSString * explanationText;                       //@synthesize explanationText=_explanationText - In the implementation block
@property (assign,getter=isInstalled,nonatomic) BOOL installed;              //@synthesize installed=_installed - In the implementation block
@property (nonatomic,copy) NSArray * items;                                  //@synthesize items=_items - In the implementation block
@property (nonatomic,copy) NSURL * legalURL;                                 //@synthesize legalURL=_legalURL - In the implementation block
@property (nonatomic,copy) NSString * legalURLText;                          //@synthesize legalURLText=_legalURLText - In the implementation block
-(id)taglineForItemIdentifier:(long long)arg1 ;
-(id)legalURL;
-(id)legalURLText;
-(id)downloadAllTitle;
-(void)setDownloadAllTitle:(id)arg1 ;
-(void)setLegalURL:(id)arg1 ;
-(void)setLegalURLText:(id)arg1 ;
-(void)setTagline:(id)arg1 forItemIdentifier:(long long)arg2 ;
-(void)setInstalled:(BOOL)arg1 ;
-(id)explanationText;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)items;
-(void)setItems:(id)arg1 ;
-(void)setExplanationText:(id)arg1 ;
-(BOOL)isInstalled;
-(void).cxx_destruct;
@end
