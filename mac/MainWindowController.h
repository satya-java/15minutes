#import <Cocoa/Cocoa.h>

@interface MyLabel : NSTextField 
{
	NSTrackingRectTag	trackingTag;
	int					seconds;
}

@end

@interface MainWindowController : NSObject
{
	IBOutlet NSWindow *		window;
	IBOutlet MyLabel *		text5min;
	IBOutlet MyLabel *		text15min;
	IBOutlet MyLabel *		text30min;
	IBOutlet MyLabel *		text1hr;

	IBOutlet NSTextField *	textTime;

	IBOutlet NSButton *		buttonStart;
	IBOutlet NSButton *		buttonStop;
	IBOutlet NSButton *		butttonResume;
	
	NSTimer *				timer;
	int						seconds;
}

- (IBAction)start:(id)sender;
- (IBAction)pause:(id)sender;
- (IBAction)resume:(id)sender;
- (IBAction)stop:(id)sender;

@end