#include <u.h>
#include <libc.h>
#include <bio.h>

static void
usage(void)
{
	fprint(2, "usage: %s [-l] ", argv0);
	exits("usage");
}

void
main(inti argc, char* argv[])
{
	ARGBEGIN{
	case 'l':
		
	default:
		usage();
	}ARGEND;

	if (argc != 2)
		usage();

	exits(nil);
}

