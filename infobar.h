#ifndef __INFOBAR_H
#define __INFOBAR_H

#define INFOBAR_TYPE (infobar_get_type())

G_DECLARE_FINAL_TYPE( Infobar, infobar, VIPSDISP, INFOBAR, GtkWidget )

#define INFOBAR( obj ) \
	(G_TYPE_CHECK_INSTANCE_CAST( (obj), INFOBAR_TYPE, Infobar ))

Infobar *infobar_new( ImageWindow *win );
void infobar_set_reveal( Infobar *infobar, gboolean reveal );

#endif /* __INFOBAR_H */
