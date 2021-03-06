/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 1:31:20 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Utilities/VoiceOver Utility.app/Contents/OtherBinaries/VoiceOverUtilityCacheBuilder.app/Contents/MacOS/VoiceOver Utility
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSTextField, NSButton;

@interface BrailleDisplayTabController : NSObject {

	NSTextField* _displayName;
	NSTextField* _statusValue;
	NSTextField* _connectionValue;
	NSTextField* _cellsValue;
	NSTextField* _statusCellsValue;
	NSButton* _setIsPrimaryDisplay;

}
-(void)setIsPrimaryDisplay:(char)arg1 ;
-(void)setIsPrimaryDisplayButtonEnabled:(char)arg1 ;
-(void)setConnectionDescription:(id)arg1 ;
-(void)setNumberOfCells:(id)arg1 ;
-(void)setNumberOfStatusCells:(id)arg1 ;
-(void)awakeFromNib;
-(void)setDisplayName:(id)arg1 ;
-(void)setStatus:(id)arg1 ;
@end

