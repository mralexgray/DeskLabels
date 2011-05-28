//
//  SDNoteViewController.h
//  DeskNotation
//
//  Created by Steven Degutis on 6/30/09.
//  Copyright 2009 8th Light. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface SDNoteWindowController : NSWindowController {
	NSDictionary *dictionaryToLoadFrom;
	
	IBOutlet NSTextField *titleLabel;
	IBOutlet NSBox *backgroundBox;
	IBOutlet NSButton *closeButton;
	
	BOOL mouseHoveringOverBox;
	BOOL mouseHoveringOverButton;
	BOOL isEditing;
	
	BOOL shouldShowCloseButton;
	
	NSTrackingArea *boxTrackingArea;
	NSTrackingArea *buttonTrackingArea;
}

- (IBAction) deleteNote:(id)sender;

- (id) initWithDictionary:(NSDictionary*)dictionary;

- (void) setTitle:(NSString*)title;

- (NSDictionary*) dictionaryRepresentation;

- (void) showWindowWithAnimation:(BOOL)animate;

@end
