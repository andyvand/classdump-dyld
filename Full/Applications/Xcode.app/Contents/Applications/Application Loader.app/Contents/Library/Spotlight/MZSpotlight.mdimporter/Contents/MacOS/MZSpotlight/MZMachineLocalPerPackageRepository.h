/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:15:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Xcode.app/Contents/Applications/Application Loader.app/Contents/Library/Spotlight/MZSpotlight.mdimporter/Contents/MacOS/MZSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ITunesPackage, MZDocument;

@interface MZMachineLocalPerPackageRepository : NSObject {

	ITunesPackage* _package;
	MZDocument* _document;

}

@property (assign) MZDocument * document;              //@synthesize document=_document - In the implementation block
-(void)_documentWriteDictionary:(id)arg1 ;
-(char)needsGeneratedVendorID;
-(void)setNeedsGeneratedVendorID:(char)arg1 ;
-(void)writeDictionary:(id)arg1 ;
-(void)_packageWriteDictionary:(id)arg1 ;
-(id)initWithPackage:(id)arg1 ;
-(void)dealloc;
-(void)addEntriesFromDictionary:(id)arg1 ;
-(id)dictionary;
-(MZDocument *)document;
-(void)setDocument:(MZDocument *)arg1 ;
-(id)initWithDocument:(id)arg1 ;
@end
